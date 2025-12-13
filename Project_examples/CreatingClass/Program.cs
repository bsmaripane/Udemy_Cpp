namespace CreatingClass
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Creating a Class!");
            Car audi = new Car("RS3", "Audi");
            Car bmw = new Car("325is", "BMW");

            Console.Write("Please enter the bBrand name: ");
            audi.Brand = Console.ReadLine() ?? "";

            Console.WriteLine($"You entered {audi.Brand}");

            Console.ReadKey();
        }
    }
}
