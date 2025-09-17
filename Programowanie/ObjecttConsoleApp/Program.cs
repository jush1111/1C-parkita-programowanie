using ObjectConsoleApp;
using System.Drawing;

PointStruct firstPoinStruct;
firstPoinStruct.x = 5;
firstPoinStruct.y = 6;

Console.WriteLine($"firstPointStruct ({firstPoinStruct.x} , {firstPoinStruct.y}");

PointStruct secondPoinStruct = firstPoinStruct;
secondPoinStruct.x = 7;

Console.WriteLine($"firstPointStruct ({firstPoinStruct.x} , {firstPoinStruct.y}");
Console.WriteLine($"secondPointStruct ({secondPoinStruct.x} , {secondPoinStruct.y}");


void ParametrTestStruct_v1(PointStruct ps)
{
    Console.WriteLine($"parametrTestStruct_v1 ({ps.x} , {ps.y}");
    ps.x = 99;
    Console.WriteLine($"parametrTestStruct_v1 ({ps.x} , {ps.y}");
}


void ParametrTestStruct_v2(PointStruct ps)
{
    Console.WriteLine($"parametrTestStruct_v2 ({ps.x} , {ps.y}");
    ps.x = 99;
    Console.WriteLine($"parametrTestStruct_v2 ({ps.x} , {ps.y}");
}

ParametrTestStruct_v1(firstPoinStruct);
Console.WriteLine($"firstPointStruct ({firstPoinStruct.x} , {firstPoinStruct.y}");

ParametrTestStruct_v2(firstPoinStruct);
Console.WriteLine($"firstPointStruct ({firstPoinStruct.x} , {firstPoinStruct.y}");

//-----------------------------------------------------------------------------





PointClass firstPointClass = new PointClass();
firstPointClass.x = 15;
firstPointClass.y = 99;
