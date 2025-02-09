#include <windows.h>
using namespace std;
int main()
{

    ShellExecute(0, "open", "powershell.exe", "spicetify update;sleep 1", 0, SW_SHOW);
    return 0;

}