//Here's a possible implementation of the LRU page replacement algorithm in C++:

#include <iostream>
using namespace std;

// defining the table size
const int table_size = 3;

// the list which stores the current pages in memory
// and where page replacement is executed.
int pages[table_size];

// page faults
int faults = 0;

// helper function to find the least recently used page
int find_lru_page() {
    int lru_page = 0;
    for(int j = 1; j < table_size; j++) {
        if(pages[j] < pages[lru_page]) {
            lru_page = j;
        }
    }
    return lru_page;
}

int main() {
    int reference_string[] = {0, 1, 2, 3, 0, 1, 4, 0, 1, 2, 3, 4};

    // iterating through the ref string
    for(int i = 0; i < sizeof(reference_string)/sizeof(reference_string[0]); i++) {
        int page = reference_string[i];

        // check if page already exists in the list, 
        // if yes, we just remove the page and append it
        // to the end of the list (last index).
        bool found = false;
        for(int j = 0; j < table_size; j++) {
            if(pages[j] == page) {
                // removing
                for(int k = j; k < table_size-1; k++) {
                    pages[k] = pages[k+1];
                }
                // appending
                pages[table_size-1] = page;
                found = true;
                break;
            }
        }

        // if page is not there
        if(!found) {
            // we first check length of page list. 
            // if still spots left in the list, we first fill it
            if(table_size > i) {
                pages[i] = page;
            }
            else {
                // if the page list is filled. We remove the 
                // least recently used page and replace it with
                // the new page. 
                int lru_page = find_lru_page();
                pages[lru_page] = page;
            }

            // Increment 1 in Page faults
            faults++;
        }
    }

    cout << "total page faults = " << faults << endl;

    return 0;
}