#define ID_FNAME 101
#define ID_COUNTCHARS 102
#define ID_COUNTWORDS 103
#define ID_CLOSE 104
#define ID_OPENFILE 105
#define FO_SUCCESS 1
#define FO_FAILED 2
//#define FO_ALREADY_OPEN 3

void WidetoAscii(TCHAR *,char*);
int FileOpen(char *,HFILE *, OFSTRUCT *);
DWORD countChars(HWND, HFILE);
DWORD countWords(HWND, HFILE);

