namespace CreatingClass
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Creating a Class!");
            Car audi = new Car("RS3", "Audi");
            Car bmw = new Car("325is", "BMW");

            Console.ReadKey();
        }
    }
}
