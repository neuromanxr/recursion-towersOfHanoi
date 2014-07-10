#include <iostream>

using namespace std;

void moveDisks(int, string, string, string);
void message(int);

int main()
{
    moveDisks(3, "peg 1", "peg 3", "peg 2");
    cout << "All the disks have been moved!" << endl;
    cout << endl;

    message(5);

    return 0;
}

void message(int times)
{
    cout << "Message called with " << times << " in times.\n";
    if (times > 0 )
    {
        cout << "This is a recursive function.\n";
        message(times - 1);
    }
    cout << "Message returning with " << times;
    cout << " in times.\n";
}

void moveDisks(int n, string source, string dest, string temp)
{
    if (n > 0)
    {
        //cout << "n: " << n << endl;

        // move n - 1 disks from source to temp
        // using dest as the temporary peg.

        moveDisks(n - 1, source, temp, dest);

        // move a disk from source to dest.
        cout << "Move a disk from " << source << " to " << dest << endl;

        // move n - 1 disks from temp to dest
        // using source as the temporary peg.
        moveDisks(n - 1, temp, dest, source);
    }
}
