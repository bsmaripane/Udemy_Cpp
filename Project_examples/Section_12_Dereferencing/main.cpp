// Section 12 Dereferencing

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Integer pointer
    int score{100};
    int *score_ptr{&score};

    cout << "*score_ptr is: " << *score_ptr << endl;

    *score_ptr = 150;

    cout << "*score_ptr is: " << *score_ptr << endl;
    cout << "score is: " << score << endl;

    cout << "\n___________________________________________________\n";

    // Double pointer
    double high_temp{100.9};
    double low_temp{37.8};
    int *temp_ptr{&high_temp};

    cout << "\n*temp_ptr is: " << *temp_ptr  << endl;
    temp_ptr = &low_temp;
    cout << "*temp_ptr after changing it to point to low_temp is: " << *temp_ptr << endl;

    cout << "\n____________________________________________________\n";

    // String  pointer
    string name{"Belmy"};
    string *name_ptr{&name};

    cout << "\n*name_ptr is: " << *name_ptr << endl;
    name = "Felicia";
    cout << "*name_ptr after reassigning name to 'Felicia' is: " << *name_ptr << endl;

    cout << "\n___________________________________________________\n";

    // Vector pointer
    vector<string> stooge {"Belmy", "Felicia", "Semape", "Maxine"};
    vector<string> *vector_ptr{nullptr};

    vector_ptr = &stooge;

    cout << "First stooge: " << (*vector_ptr).at(0) << endl;

    cout << 

    return 0;
}