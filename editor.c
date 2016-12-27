/**
 *  Editor view of the browser
 */

#include <time.h>

typedef struct {
    // TODO
} erow;

struct editor_config {
    char *fname;
    char statusmsg[80];
    time_t statusmsg_time;
    int cx, cy;
    int rowoff;
    int coloff;
    int screenrows;
    int screencols;
    int numrows;
    erow *row;
    int rawmode;
    int dirty;
    struct editor_syntax *syntax;
};

static struct editor_config E;
