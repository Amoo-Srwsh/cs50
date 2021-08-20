#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1; //تعداد کاندید ها
    if (candidate_count > MAX)  //اگر کاندیدی ها از حد گزشتن خارج شو
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)   //بنا بر این تمامی کاندید هارو بریز داخل کپسول
    {
        candidates[i].name = argv[i + 1];       //تک تک نام ها
        candidates[i].votes = 0;                //و تک تک نام ها باید در حال ٠ باشند
    }

    int voter_count = get_int("Number of voters: ");     //تعداد ری دهنده هارو داریم از کاربر میگیریم اگه ٥ باشد ٥ نفر ری میدن

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)                //گفتم اگه ٥ باشد ٥ بار از کاربرها نام میگیریم،
    {
        string name = get_string("Vote: ");              //تک تک اسم هارو از کاربرها دریافت میکنم

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes += 1;
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    int winner = candidates[0].votes;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > winner)
        {
            winner = candidates[i].votes;
        }
    }

    for (int i = 0; i <  candidate_count; i++)
    {
        if (candidates[i].votes == winner)
        {
            printf("%s\n", candidates[i].name);
        }
    }
    return;
}#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1; //تعداد کاندید ها
    if (candidate_count > MAX)  //اگر کاندیدی ها از حد گزشتن خارج شو
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)   //بنا بر این تمامی کاندید هارو بریز داخل کپسول
    {
        candidates[i].name = argv[i + 1];       //تک تک نام ها
        candidates[i].votes = 0;                //و تک تک نام ها باید در حال ٠ باشند
    }

    int voter_count = get_int("Number of voters: ");     //تعداد ری دهنده هارو داریم از کاربر میگیریم اگه ٥ باشد ٥ نفر ری میدن

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)                //گفتم اگه ٥ باشد ٥ بار از کاربرها نام میگیریم،
    {
        string name = get_string("Vote: ");              //تک تک اسم هارو از کاربرها دریافت میکنم

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes += 1;
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    int winner = candidates[0].votes;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > winner)
        {
            winner = candidates[i].votes;
        }
    }

    for (int i = 0; i <  candidate_count; i++)
    {
        if (candidates[i].votes == winner)
        {
            printf("%s\n", candidates[i].name);
        }
    }
    return;
}
