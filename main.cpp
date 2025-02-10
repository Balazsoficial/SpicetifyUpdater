#include <windows.h>
using namespace std;
int main()
{

    ShellExecute(0, "open", "powershell.exe", "spicetify update", 0, SW_HIDE);
    return 0;

}