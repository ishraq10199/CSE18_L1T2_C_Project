int i=0; j=1, c0=0;

void setTextGreen()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &ConsoleInfo);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
}

void setTextDefault()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO ConsoleInfo;
    GetConsoleScreenBufferInfo(hConsole, &ConsoleInfo);
    SetConsoleTextAttribute(hConsole, ConsoleInfo.wAttributes);
}

void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void letterPrint(char ch)
{
switch(tolower(ch)){

case 'a':
    gotoxy(i, j);
    printf("  ####  ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" ##  ## ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("########");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    c0++;
    j=1;
    i=10*c0;
    break;


case 'b':
    gotoxy(i, j);
    printf("####### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("####### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("########");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'c':
    gotoxy(i, j);
    printf(" ###### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" ###### ");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'd':
    gotoxy(i, j);
    printf("####### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" ##   ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" ##   ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" ##   ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" ##   ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("####### ");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'e':
    gotoxy(i, j);
    printf("########");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("####### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("########");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'f':
    gotoxy(i, j);
    printf("########");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("####### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'g':
    gotoxy(i, j);
    printf("########");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##  ####");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("########");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'h':
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("########");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'i':
    gotoxy(i, j);
    printf(" #######");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("   ###  ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("   ###  ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("   ###  ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("   ###  ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" #######");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'j':
    gotoxy(i, j);
    printf("########");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("     ## ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("     ## ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("     ## ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##   ## ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" #####  ");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'k':
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##   ## ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("######  ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##   ## ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##   ###");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'l':
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("########");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'm':
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("# #  # #");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("# #### #");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("#  ##  #");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("#      #");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("#      #");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'n':
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("###   ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("####  ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("## ## ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##  ####");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##   ###");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'o':
    gotoxy(i, j);
    printf("########");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("########");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'p':
    gotoxy(i, j);
    printf("####### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("####### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'q':
    gotoxy(i, j);
    printf(" #####  ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("#    ## ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("#    ## ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("#  #### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##   ###");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" ##### #");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'r':
    gotoxy(i, j);
    printf("####### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("######  ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##   ## ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##   ###");
    c0++;
    j=1;
    i=10*c0;
    break;

case 's':
    gotoxy(i, j);
    printf(" ###### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##      ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" ###### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("      ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("####### ");
    c0++;
    j=1;
    i=10*c0;
    break;

case 't':
    gotoxy(i, j);
    printf("########");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("   ##   ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("   ##   ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("   ##   ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("   ##   ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("   ##   ");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'u':
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("########");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'v':
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" ##  ## ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("   ##   ");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'w':
    gotoxy(i, j);
    printf("#      #");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("#      #");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("#      #");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("#  ##  #");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("# #### #");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'x':
    gotoxy(i, j);
    printf("#      #");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" #    # ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("  #  #  ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("   ##   ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" ##  ## ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("##    ##");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'y':
    gotoxy(i, j);
    printf("#      #");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" #    # ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("  #  #  ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("   ##   ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("   ##   ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("  ####  ");
    c0++;
    j=1;
    i=10*c0;
    break;

case 'z':
    gotoxy(i, j);
    printf("########");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("      ##");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("    ### ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("  ###   ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf(" ##     ");
    j+=1;
    i=10*c0;
    gotoxy(i, j);
    printf("########");
    c0++;
    j=1;
    i=10*c0;
    break;

};
}
