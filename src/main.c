#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main (void)
{
  char buf2[80];
  char *buf[] = { "hey idiot",
                  "why u text me",
                  "what u doin here",
                  "JOE MAMA I GOT YA",
                  "yo weerrid",
                  "yo like yo chocalate baroer?",
                  "There is always one thing to remember: "
                  "writers are always selling somebody out.",
                  "You worry too much about your job.  Stop it."
                  "You are not paid enough to worry.",
                  "weiird man",
                  "STOP, STOP, JUMP IN THE CACACACACAC",
                  "minecraft is good",
                  "stop it, get some help"

  };
  int index;

next:

  printf ("send something and a phrase will show:\n");
  fflush (stdout);
  fgets (buf2, sizeof (buf2), stdin);
  if (buf2[0] == 'q' && buf2[1] == '\n' && buf2[2] == 0)

  {
      puts("Good bye!");
      return 0;
  }
  index = rand() % (sizeof(buf)/sizeof(char *));
  printf ("u got a reply: %s\n", buf[index]);
  goto next;
  return 0;
}
