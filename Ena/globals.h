#ifndef ENA_GLOBALS
#define ENA_GLOBALS
#include <limits.h>
#define ENA_URL_SEPERATOR "?"

int LOG_COUNTER;

char ENV_CWD[PATH_MAX];

char SETTINGS_CONTENT_ROOT[PATH_MAX];
char SETTINGS_CONTENT_ROOT_PATH[PATH_MAX];
char SETTINGS_CONTENT_DEFAULT_FILE[256];
int SETTINGS_FILE_BUFFER_SIZE;
int SETTINGS_URL_BUFFER_SIZE;
int SETTINGS_URL_DATA_BUFFER_SIZE;

int SETTINGS_ERROR_DISPLAY_INDEX_ON_EMPTY_DIR;
int SETTINGS_DEBUG_LEVEL;
// 0: basic (code flow)
// 1: basic+ (code flow + request data)
// 2: detailed (detailed code flow, file paths, etc.)

char SETTINGS_ERROR_HANDLING_404[PATH_MAX];
char SETTINGS_ERROR_HANDLING_500[PATH_MAX];

typedef struct {
    char *ext;
    char *type;
} EXT_FINDER;

#endif
