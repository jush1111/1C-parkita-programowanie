using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticalTasksConsoleApp.styczen2023_1
{
    internal class Task2
    {

        public void task()
        {

            note n1 = new note("shopping", "buy milk");
            note n2 = new note("meeting", "at 10:00AM");

            n1.display();
            n2.display();

            n1.checking();
            n2.checking();
        }
    }

}


class note
{
    private static int counterNotes = 0;

    private int id;

    protected string title;
    protected string contents;

    public note(string t, string c)
    {
        counterNotes++;
        id = counterNotes;
        title = t;
        contents = c;
    }
    public void display()
    {

        Console.WriteLine($"Tytuł: {title}");
        Console.WriteLine($"Treść: {contents}");
    }

    public void checking()
    {
        Console.WriteLine($"ID: {id}; Licznnik: {counterNotes}; Tytuł: {title}; Treść: {contents}");
    }
}