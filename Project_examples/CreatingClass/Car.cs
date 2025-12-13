using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CreatingClass
{
    internal class Car
    {
        // member variable
        private string _model = "";
        private string _brand = "";

        // property
        public string Model { get => _model; set => _model = value; }
        public string Brand {
            get { 
                
                return _brand; }
            set { 
                if (string.IsNullOrEmpty(value))
                {
                    Console.WriteLine("You entered NOTHING!");
                    _brand = "DEFAULTVALUE";
                }
                else
                    _brand = value; }
            }

        // Constructor
        public Car(string model, string brand) {
            Model = model;
            Brand = brand;
            Console.WriteLine($"An Object of {Model} {Brand} Car has been created!");
        }
    }
}
