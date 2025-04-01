// Operators and Order of Evaluation

namespace OperatorsOrderOfEvaluationAndMathBasic
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Decaring and initialising variables
            int number1 = 5;
            int number2 = 13;

            // Concatination
            Console.WriteLine("Age is " + number1);
            Console.WriteLine("Addition number1 + number2 = " + number1 + number2);

            // Order of Evaluation
            Console.WriteLine("Subtraction number1 - number2 = " + number1 - number2);
            Console.WriteLine("Multiplication number1 * number2 = " + number1 * number2);
            Console.WriteLine("Division number1 / number2 = " + number1 / number2);

            // 

            // Wait for the key press before closing
            Console.ReadKey();
        }
    }
}
