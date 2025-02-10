//davaleba 1
 /*#include <iostream>
using namespace std;
//drawing a different size tree using void function
void tree(int k) { //defining main variable
    for (int i=1; i<=k; i++ ) { //first for loop for the amount of rows
        for (int n=0; n<=k-i; n++) {
            cout<<" "; //for the amount of spaces
        }
        for (int j=1; j<=i*2-1; j++) { //for printing the starts
            cout<<"*";
        }
        cout<<endl;
    }
    if (k<=0) //making sure that if the program receives a negative number or zero to return a default setting k=5
        return tree(5);
}
int main() {
    int k;
    cout<<"How big do you want your tree to be ? ";
    cin>>k;
   tree(k); //calling the function in main


}*/
//davaleba 1 gagrdzeleba
/*#include <iostream>
using namespace std;
//drawing tree but with an upside down version
void tree(int k=5, int num=0) {
    if (num < 0) { //this is the upside down version if num is negative
        for (int i=1; i<=k; i++) { //first loop for the rows
            for (int n=0 ; n<=i-1; n++ ) { //second loop for spaces
                cout<<" ";
            }
            for (int j=k*2-1; j>=i*2-1; j--) { //third loop for printing the stars
                cout<<"*";
            }
            cout<<endl;
        }
    }
    if (num == 0 ) { //if num is equal to zero we receive the normal version
        for (int i=1; i<=k; i++ ) { //first for loop for the amount of rows
            for (int n=0; n<=k-i; n++) {
                cout<<" "; //for the amount of spaces
            }
            for (int j=1; j<=i*2-1; j++) { //for printing the starts
                cout<<"*";
            }
            cout<<endl;
        }
    }
    if (k==0) //making sure that if the program receives zero to return a default setting k=5 and num=0
        return tree(5);
}

int main() {
    int k, num;
    cout<<"how big do you want your tree ? ";
    cin>>k;
    cout<<"// if you want to turn it upside down enter -1 // "<<endl;
    cin>>num;
    tree(k,num);
}*/
//davaleba 4
/*#include <iostream>
using namespace std;
const double PI = 3.14159265358979323846;
template <class T>
T converter(T radians) {
    T degree = radians * 180 / PI;
    return degree;
}
int main() {
    float radians;
    cout<<"Enter what degree you want to convert (in radians) : ";
    cin>>radians;
     float degree = converter(radians);
    cout<<"The value of degree is : "<<degree<<" degrees"<<endl;
}*/
//davaleba 2
/*#include <iostream>
using namespace std;
//int reverse(int n);
int reversed(int n, int reserved);
int main() {
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    cout<<reversed(n,0);
}
int reverse(int n) {
    int reversed =0;
    while (n!=0){
        reversed = reversed *10 + n % 10;
        n/=10;
    }
    return reversed;
}
int reversed(int n, int reversednumber) {
    if (n==0)
        return reversednumber;
    return reversed(n / 10, reversednumber * 10 + n % 10);
}*/
//davaleba 3
/*#include <iostream>
#include <cmath>
using namespace std;
string tobinary(int binary);
int main() {
    int binary;
    cout<<"Enter number you want to convert : ";
    cin>>binary;
    cout<<tobinary(binary)<<endl;
}
string tobinary(int n) {
    string binary = "";
    if (n == 0)
        return "0";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}*/
//gamcda
/* #include <iostream>
#include <cmath>
using namespace std;
int factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
double cosfunction(int n, double x) {
    // n aris raodenoba ramdeni wevri unda mwkrivs // x aris rac shegvaqvs
    double sum =1;
    int m = -1;
    for (int i = 2; i <= n; i+=2) {
        sum += m*(pow(x, i)/factorial(i));
        m*=-1;
    }
    return sum;
}
double sinfunction(int n, double x) {
    double sum =x;
    int m = -1;
    for (int i =3 ; i <= n; i+=2) {
        sum += m* (pow(x, i)/factorial(i));
        m*=-1;
    }
    return sum;
}

int main() {
    int n, x;
    cout<< "Enter how long you want ur jhfjh to bee : ";
    cin >> n;
    cout<<"Enter x : ";
    cin >> x;
    double sin = sinfunction(n, x);
    double cos = cosfunction(n, x);
    cout<<"sin = "<<sin<<endl;
    cout<<"cos = "<<cos<<endl;
}*/
// davaleba 5
//davaleba 1
/*#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(NULL));
    const int size = 10000;
    int k=0, m=0,x,y;
    int M[size];
    for (int i = 0; i < size; i++) {
        M[i] = rand() % 9;
        if (M[i] == 2) x++;
        else if (M[i] == 3) y++;
        if (M[i]==1 && m ==1) {
           // M[i] = M[i-1];
            i--;
        }
        if (M[i] == 1) k++;
            cout << M[i] << endl;
            if (k==5) m=1;
        if (m ==1 && x>y) break;
    }
    cout <<"--------------";
    cout << k << endl;
    cout << x << endl;
    cout << y << endl;

} */
//davaleba 3
/*#include <iostream>
using namespace std;
int main() {
    const int size = 5;
    int min;
    int arr[size] = {1, 2, 3, 4, 5};
    for (int i = 0; i < size; i++) {
        min = arr[0] + arr[1];
        if (arr[i] + arr[i + 1] < min)
            min = arr[i] + arr[i + 1];
        cout << arr[i] << endl;
    }
    cout << "min value "<<min << endl;
} */
//davaleba 4
/*#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool containsAllNumbers(int arr[], int size) {
    bool found[10] = {false};
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 1 && arr[i] <= 10) {
            found[arr[i] - 1] = true;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (!found[i]) {
            return false;
        }
    }
    return true;
}

void randomizeArray(int arr[], int size) {
    srand(static_cast<unsigned>(time(0)));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10 + 1;
    }
}

int main() {
    int numbers[10];
    randomizeArray(numbers, 10);

    cout << "Randomized array: ";
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    if (containsAllNumbers(numbers, 10)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}*/
//davaleba 5
/*#include <iostream>

using namespace std;

void shiftRight(int arr[], int size) {
    int last = arr[size - 1];
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

int main() {
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Original array: ";
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";

    shiftRight(numbers, 10);

    cout << "Array after shifting right: ";
    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";
}*/
//davaleba 6
/*#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    const int SIZE = 100;
    int A[SIZE];
    char B[SIZE];
    int n = 0;

    srand(0);

    for (int i = 0; i < SIZE; i++) {
        A[i] = rand() % (127 - 33 + 1) + 33; // Random numbers between 33 and 127
    }

    for (int i = 0; i < SIZE; i++) {
        if (A[i] % 2 == 0) {
            B[n++] = static_cast<char>(A[i]);
        }
    }

    cout << "Generated Password: ";
    for (int i = 0; i < n; i++) {
        cout << B[i];
    }
    cout << endl;
}*/
//davaleba 7
/*#include <iostream>
#include <cstdlib>

using namespace std;

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

double findMedian(int arr[], int size) {
    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        return arr[size / 2];
    }
}

int main() {
    const int SIZE = 10;
    int numbers[SIZE];

    srand(0);

    for (int i = 0; i < SIZE; i++) {
        numbers[i] = rand() % 100 + 1;
    }

    cout << "Original array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    sortArray(numbers, SIZE);

    cout << "Sorted array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    double median = findMedian(numbers, SIZE);
    cout << "Median: " << median << endl;
}*/
//davaleba 3
/*#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateRandomArray(int x[], int size) {
    for (int i = 0; i < size; ++i) {
        x[i] = rand() % 100; // Random numbers between 0 and 99
    }
}

void printArray(const int x[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << x[i] << " ";
    }
    cout << endl;
}

pair<int, int> findMinSumPair(const int x[], int size) {
    int minSum = x[0] + x[1];
    int minIndex = 0;

    for (int i = 1; i < size - 1; ++i) {
        int sum = x[i] + x[i + 1];
        if (sum < minSum) {
            minSum = sum;
            minIndex = i;
        }
    }

    return {minIndex, minIndex + 1};
}

int main() {
    srand(time(0));
    const int size = 10;
    int x[size];

    generateRandomArray(x, size);
    printArray(x, size);

    pair<int, int> indices = findMinSumPair(x, size);
    cout << "The two neighboring elements with the minimal sum are: " << x[indices.first]
         << " and " << x[indices.second] << endl;
    cout << "Their sum is: " << x[indices.first] + x[indices.second] << endl;

} */
//davaleba 2
/*#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generateRandomArray(int x[], int n) {
    for (int i = 0; i < n; ++i) {
        x[i] = rand() % 100; // Random numbers between 0 and 99
    }
}

int calculateExpression(const int x[], int n) {
    int result = 0;
    for (int i = 0; i < n; ++i) {
        result += (i % 2 == 0 ? x[i] : -x[i]);
    }
    return result;
}

int main() {
    srand(time(0));
    int n;
    cout<<"Enter the value for n : ";
    cin >> n;
    int x[n];

    generateRandomArray(x, n);

    int result = calculateExpression(x, n);
    cout << result << endl;


}*/
//davaleba 1
/*#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    const int size = 10;
    int array[size];

    while (true) {
        for (int i = 0; i < size; ++i) {
            array[i] = rand() % 10;
        }

        int countOnes = 0, countGreaterThanThree = 0;
        for (int i = 0; i < size; ++i) {
            if (array[i] == 1) ++countOnes;
            if (array[i] > 3) ++countGreaterThanThree;
        }

        if (countOnes == 5 && countGreaterThanThree >= 2) {
            break;
        }
    }

    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }

}*/
//sandros proeqti
/*#include <iostream>
#include <iomanip>
using namespace std;
void calc(char a);

int main () {
    char ans;
    char start = 'N';
cout << "*********************************************************************************************************************" <<endl;
cout << "Hello this program will help you deal with cable lenght, voltage drops or use of materials when constructing cables."<<endl;
cout << "*********************************************************************************************************************" <<endl;

while(true) {

    cout << endl;
    cout << "What is it that you want to calculate?(L for lenght, S for size, P for material)"<< endl;
    cin >> ans;
    ans = toupper(ans);

    calc(ans);
    cout << endl;

cout << "Do you want to start over (Y/N)?"<<endl;
cin >> start;
start = toupper(start);


        if(start == 'N') {
            break;
        }
}
cout << endl;
 cout << "Thank you for using the program. Goodbye!"<<endl;

}

void calc(char a) {
    int n;
        cout << "How many calculations do you want to do :";
        cin >> n;

    if (a == 'L') {

    double voltageDrop, current, resistance, cableLength[n];
    cout << endl << "You selected to calculate cable length." << endl;
        for (int i=0;i<n;i++) {

            cout << "Calculation N" << i+1 << ":" << endl << endl;

            cout << "Enter the allowed voltage drop (in volts): ";
            cin >> voltageDrop;
            cout << "Enter the current (in amps): ";
            cin >> current;
            cout << "Enter the resistance of the cable per meter (in ohms): ";
            cin >> resistance;

            cableLength[i] = voltageDrop / (2 * current * resistance);
            cout << "The maximum cable length is: " << cableLength[i] << " meters." << endl << endl;

        }

    cout << "*********************************************************************" << endl;
    cout << "                      Results for the calculation of lenght!" << endl;
    for (int j=0;j<n;j++) {
    cout << "For Calculations No" << j+1 << " you got :" << cableLength[j] <<" m." << endl << endl ;
        }
    cout << "*********************************************************************" << endl;

    }

    else if (a == 'S') {
        double voltageDrop, current, length, resistivity, area[n];

        cout << endl << "You selected to calculate cable size." << endl;

        for (int i=0;i<n;i++) {

             cout << "Calculation N" << i+1 << ":" << endl << endl;

            cout << "Enter the allowed voltage drop (in volts): ";
            cin >> voltageDrop;
            cout << "Enter the current (in amps): ";
            cin >> current;
            cout << "Enter the cable length (in meters): ";
            cin >> length;
            cout << "Enter the resistivity of the cable material (in ohm-meter): ";
            cin >> resistivity;


            area[i] = (2 * current * resistivity * length) / voltageDrop;
            cout << "The required cable size (cross-sectional area) is: " << area[i] * 1e6 << " mm^2." << endl; }

             cout << "*********************************************************************" << endl;
             cout << "                      Results for the calculation of cable size!" << endl;
                  for (int j=0;j<n;j++) {
             cout << "For Calculations No" << j+1 << " you got :" << area[j] <<" mm^2." << endl << endl ;
        }
            cout << "*********************************************************************" << endl;

    }

    else if (a == 'P') {
        double length, area, current, resistivityCopper = 1.68e-8, resistivityAluminum = 2.82e-8;
        string ans[n];

        for (int i=0;i<n;i++) {

             cout << "Calculation N" << i+1 << ":" << endl << endl;

            cout << endl << "You selected to determine the material." << endl;
            cout << "Enter the cable length (in meters): ";
            cin >> length;
            cout << "Enter the cross-sectional area (in mm^2): ";
            cin >> area;
            area /= 1e6;
            cout << "Enter the current (in amps): ";
            cin >> current;

            double voltageDropCopper = 2 * current * (resistivityCopper / area) * length;
            double voltageDropAluminum = 2 * current * (resistivityAluminum / area) * length;

            cout << "Voltage drop for copper: " << voltageDropCopper << " V " << endl;
            cout << "Voltage drop for aluminum: " << voltageDropAluminum << " V " << endl;

            if (voltageDropCopper < voltageDropAluminum) {
                cout << "Copper is better for this application as it has a lower voltage drop." << endl <<endl;
                ans[i] = "Copper";
            }
            else {
                cout << "Aluminum is better for this application as it may be cheaper but acceptable for the voltage drop." << endl <<endl;
                ans[i] = "Aluminum";
            }

        if (voltageDropAluminum <= voltageDropCopper * 1.1) {
               cout << "Aluminum may also be acceptable due to cost benefits, despite the slightly higher voltage drop." << endl;
                 }

        }
                 cout << "*********************************************************************" << endl;
            cout << "                      Results for the best materials!" << endl;
                  for (int j=0;j<n;j++) {
            cout << "For Calculation No" << j+1 << " its preferable to use " << ans[j] <<" wire." << endl << endl ;
                }
            cout << "*********************************************************************" << endl << endl;
        cout << setw(15) << "NOTE!!!!" << endl << "We have to consider the fact that copper is almost always superior for the voltage drop, but Aluminium costs slightly less and wheights less ";
        cout << "but dont forget to take into consideration availability." << endl;

    }else {
            cout << endl << "Invalid selection. Please enter 'L', 'S', or 'P'." << endl << endl << endl;
        }



 } */
