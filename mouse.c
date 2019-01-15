#include <windows.h>
#include <time.h>

long random(long min, long max)
{
    return rand() % (max - min + 1) + min;
}

int main()
{
    time_t t;
    srand((unsigned)time(&t));

    FreeConsole();

    RECT desktop;
    const HWND hDesktop = GetDesktopWindow();
    GetWindowRect(hDesktop, &desktop);

    long maxwidth = desktop.right;
    long maxheight = desktop.bottom;

    while (1)
    {
        SetCursorPos(random(0, maxwidth), random(0, maxheight));
    }

    return 0;
}
