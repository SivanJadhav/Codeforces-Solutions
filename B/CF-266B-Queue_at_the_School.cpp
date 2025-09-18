#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int n, t; // n is the number of students and t is time
    cin >> n >> t;

    string queue;
    cin >> queue;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0, length = queue.length(); j + 1 <= length; j++)
        {
            if (queue[j] == 'B' && queue[j + 1] == 'G')
            {
                queue[j] = 'G';
                queue[j + 1] = 'B';
                j++;
            }
        }
    }

    cout << queue << '\n';
}
 // (I've attached code for context.)
 // Coding is such a mfering thing. Like you fail literally on printing something. Then the next second you literally construc an algorithm to solve the problem (I did it too because the Queue at The School problem is said to require us constructing an algorithm istead of pre-made) and you still fail, AHHAHAHAHAHHAHAHHA. Then you add one line incrementing a variable and everything works, all codeforces tests pass, alllLllllll of emmmmmmmm 😈😈😈😈😈😈😈😈😈😈😈! But why? 😭😭😭😭😭😭😭😭😭😭😭😭😭😭😭  But it works!!!! 😆😆😆🤣🤣🤣!!!
 
 // Like I added j++ after changing the positions and everything worked?!!! Before that I added j += 2 instead of j++ but it broke program. 
 
 // But thankfully I at least understood what happened now:
 
 // The problem was that after moving a boy to the next index the program immedietly switched to the next index but we didn't want that, now we want the next different boy to let a girl go ahead, so I added one to j to skip the index where we just moved the boy, and because we added one then we will find any boy but the one we moved. But if I always added j += 2 then it might skip some people altogether. We only want to skip the boy we moved and if we didn't move anyone, skip no one. So only add one when we mvoe the boy. Lol