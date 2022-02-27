// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {

//     string name = "osama abdalla";
//     string compare;
//     string result;
//     cout << name << endl;
//     int i;
//     while (true)
//     {
//         cin >> compare[i];
        
//         if (compare[i] == name[i])
//         {
//             result[i] = compare[i];
//             i++;
//             continue;
//         }
//         else if (result == name)
//             break;
//         else
//             continue;
//     }

//     cout << endl
//          << "The name after the comparison is: " << result << endl;

//     cin.get();
//     system("pause");
// }

// #include <graphics.h>
// #include <conio.h>

// int main() 
// {
// 	//initilizing graphic driver and 
// 	//graphic mode variable
// 	int graphicdriver=DETECT,graphicmode;

// 	//calling initgraph with parameters
// 	initgraph(&graphicdriver,&graphicmode,"c:\\turboc3\\bgi");

// 	//Printing message for user
// 	outtextxy(20, 20 + 20, "Program to print different fonts in C graphics");

// 	//initilizing variables
// 	int x = 75, y = 75, f = 0;

// 	//for loop to print different fonts
//     //4
// 	for (f = 0; f <= 5; f++)
// 	{
// 		settextstyle(f, HORIZ_DIR, 1);
// 		outtextxy(x, y, "Testing different fonts..");
// 		y = y + 20;
// 	}

// 	getch();

// 	return 0;
// }