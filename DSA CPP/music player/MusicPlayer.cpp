#include<iostream>
#include<string>
#include<fstream>
#include<cstring> // For strcpy, strcmp

using namespace std;

struct node {
    char song[100];
    struct node *next;
    struct node *prev;
}*top = NULL, *temp = NULL, *top1 = NULL;

// Function to write to the file
void tofile(char a[]) {
    fstream f1;
    f1.open("playlist.txt", ios::out | ios::app);
    f1 << a << endl;
    f1.close();
}

// Function to add a node to the playlist
void add_node(struct node *first) {
    char a[100];
    while (first->next != NULL) {
        first = first->next;
    }
    first->next = new node;
    first->next->prev = first;
    first = first->next;
    cout << "\nEnter Song name: ";
    cin >> a;  // Use cin instead of scanf
    strcpy(first->song, a);
    tofile(a);
    first->next = NULL;
}

// Function to add node from file
void add_node_file(struct node *first, string a) {
    while (first->next != NULL) {
        first = first->next;
    }
    first->next = new node;
    first->next->prev = first;
    first = first->next;
    strcpy(first->song, a.c_str());
    first->next = NULL;
}

// Function to delete a song from file
void delete_file(char a[]) {
    fstream f1, f2;
    string line;
    int x = 0;
    f1.open("playlist.txt", ios::in);
    f2.open("temp.txt", ios::out | ios::trunc);
    while (getline(f1, line)) {
        if (strcmp(a, line.c_str()) != 0)
            f2 << line << endl;
        else if (strcmp(a, line.c_str()) == 0)
            x = 1;
    }
    f1.close();
    f2.close();
    remove("playlist.txt");
    rename("temp.txt", "playlist.txt");
    if (x == 0) {
        cout << "There is no song with the name you entered." << endl;
    } else {
        cout << "Song has been deleted." << endl;
    }
}

// Function to delete a node
void del_node(struct node *first) {
    if (!first || !first->next) {
        cout << "Cannot delete, no songs available!" << endl;
        return;
    }
    
    struct node *temp = first;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    if (temp->prev != NULL) {
        temp->prev->next = NULL;
    }
    
    delete temp;
    cout << "Deleted last song" << endl;
}

// Function to print the playlist
void printlist(struct node *first) {
    cout << "\nPlaylist:" << endl;
    while (first != NULL) {
        cout << first->song << endl;
        first = first->next;
    }
}

// Function to count total nodes
void count_nodes(struct node *first) {
    int i = 0;
    while (first != NULL) {
        first = first->next;
        i++;
    }
    cout << "\nTotal songs: " << i << endl;
}

// Function to delete node by position
struct node *del_pos(struct node *pointer, int pos) {
    struct node *temp;
    if (pos == 1) {
        temp = pointer;
        delete_file(temp->song);
        pointer = pointer->next;
        if (pointer != NULL) pointer->prev = NULL;
        delete temp;
        return pointer;
    }
    struct node *prev1 = pointer;
    for (int i = 1; i < pos - 1; i++) {
        prev1 = prev1->next;
    }
    temp = prev1->next;
    delete_file(temp->song);
    prev1->next = temp->next;
    if (temp->next != NULL) temp->next->prev = prev1;
    delete temp;
    return pointer;
}

// Function to search for a song in the playlist
void search1(struct node *first) {
    char song[100];
    cout << "\nEnter song to be searched: ";
    cin >> song;  // Use cin instead of scanf
    int flag = 0;
    while (first != NULL) {
        if (strcmp(first->song, song) == 0) {
            cout << "\nSong Found" << endl;
            flag++;
            break;
        } else {
            first = first->next;
        }
    }
    if (flag == 0) {
        cout << "\nSong Not found" << endl;
    }
}

// Stack functions for recent songs
void create() {
    top = NULL;
}

void push(char data[]) {
    if (top == NULL) {
        top = new node;
        top->next = NULL;
        strcpy(top->song, data);
    } else if (strcmp(top->song, data) != 0) {
        temp = new node;
        temp->next = top;
        strcpy(temp->song, data);
        top = temp;
    }
}

void display() {
    top1 = top;
    if (top1 == NULL) {
        cout << "\nNo recently played tracks.\n";
        return;
    }
    cout << "\nRecently played tracks:\n";
    while (top1 != NULL) {
        cout << top1->song << endl;
        top1 = top1->next;
    }
}

// Function to play a song
void play(struct node *first) {
    char song[100];
    printlist(first);
    cout << "\nChoose song you wish to play: ";
    cin >> song;  // Use cin instead of scanf
    int flag = 0;
    while (first != NULL) {
        if (strcmp(first->song, song) == 0) {
            cout << "\nNow Playing: " << song << endl;
            flag++;
            push(song);
            break;
        } else {
            first = first->next;
        }
    }
    if (flag == 0) {
        cout << "\nSong Not found" << endl;
    }
}

// Function to display recently played songs
void recent() {
    display();
}

// Function to display the last played song
void topelement() {
    if (top == NULL) {
        cout << "\nNo last played tracks.\n";
    } else {
        cout << "\nLast Played Song: " << top->song << endl;
    }
}

// Function to sort the playlist
void sort(struct node *&pointer) {
    if (!pointer || !pointer->next) return;
    bool swapped;
    struct node *ptr1;
    struct node *lptr = NULL;
    do {
        swapped = false;
        ptr1 = pointer;
        while (ptr1->next != lptr) {
            if (strcmp(ptr1->song, ptr1->next->song) > 0) {
                swap(ptr1->song, ptr1->next->song);
                swapped = true;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

// Function to add songs from a file
void addplaylist(struct node *start) {
    fstream f1;
    string line;
    f1.open("playlist.txt", ios::in);
    while (getline(f1, line)) {
        add_node_file(start, line);
    }
    cout << "Playlist Added" << endl;
    f1.close();
}

// Delete menu with options to delete by search or position
void deletemenu(struct node *start) {
    int c;
    cout << "Which type of delete do you want?\n1. By Search\n2. By Position" << endl;
    cin >> c;
    switch (c) {
    case 1:
        search1(start);
        break;
    case 2:
        int pos;
        cout << "Enter the position of the song: ";
        cin >> pos;
        start = del_pos(start, pos);
        break;
    default:
        cout << "Invalid choice!" << endl;
    }
}

// Main function
int main() {
    struct node *start;
    start = new node;
    start->prev = NULL;
    cout << "\nEnter song name: ";
    cin >> start->song;
    tofile(start->song);
    start->next = NULL;
    int ch;
    create();
    do {
        cout << "\nMenu:\n1. Add song\n2. Print Playlist\n3. Search a song\n4. Play\n5. Recently played tracks\n6. Last Played Track\n7. Delete Song\n8. Total Songs\n9. Sort Playlist\n10. Add Playlist from File\n11. Exit\nChoose: ";
        cin >> ch;
        switch (ch) {
            case 1:
                add_node(start);
                break;
            case 2:
                printlist(start);
                break;
            case 3:
                search1(start);
                break;
            case 4:
                play(start);
                break;
            case 5:
                recent();
                break;
            case 6:
                topelement();
                break;
            case 7:
                deletemenu(start);
                break;
            case 8:
                count_nodes(start);
                break;
            case 9:
                sort(start);
                break;
            case 10:
                addplaylist(start);
                break;
            case 11:
                exit(0);
        }
    } while (ch != 11);

    return 0;
}
