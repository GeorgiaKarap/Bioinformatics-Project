#include <stdio.h>
#include <string.h>

int main()
{
    char seq[1000];
    int i, k;
    int codons;
    int length, incorrectbases;

    codons = 0;
    incorrectbases = 0;

    printf("Give me a nucleotide sequence:");

    while (scanf("%s", seq) == 1)
    {
        length = strlen(seq);

        incorrectbases = 0;
        for (i = 0; i < length; i++)
        {
            if (seq[i] != 'A' && seq[i] != 'T' && seq[i] != 'G' && seq[i] != 'C')
            {
                incorrectbases = 1;
                break;
            }
        }

        if (incorrectbases)
        {
            printf("Incorrect nucleotide sequence\n");
        }
        else
        {
            for (i = 0; i + 2 < length; i++)
            {
                if (seq[i] == 'A' && seq[i+1] == 'T' && seq[i+2] == 'G')
                {
                    for (k = i + 3; k + 2 < length; k += 3)
                    {
                        if ((seq[k] == 'T' && seq[k+1] == 'A' && seq[k+2] == 'A') ||
                            (seq[k] == 'T' && seq[k+1] == 'A' && seq[k+2] == 'G') ||
                            (seq[k] == 'T' && seq[k+1] == 'G' && seq[k+2] == 'A'))
                        {
                            codons++;
                            printf("Found coding sequence starting with %d and ending with %d\n", i+1, k+1);
                            break;
                        }
                    }
                }
            }

            if (codons == 0)
            {
                printf("Could not find a coding sequence\n");
            }
        }

        codons = 0;
        incorrectbases = 0;

        printf("Give me another nucleotide sequence:\n");
    }

    return 0;
}






