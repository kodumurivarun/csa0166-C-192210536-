#include <iostream>
using namespace std;

const int size = 3; // Corrected declaration of size

class vector 
{ 
    int v[size]; 
public: 
    vector(); 
    vector(int *x); 
    friend vector operator *(int a, vector b); 
    friend vector operator *(vector b, int a); 
    friend istream & operator >>(istream &din, vector &b); 
    friend ostream & operator <<(ostream &dout, vector &b); 
}; 

vector::vector() 
{ 
    for(int i=0; i<size; i++) 
        v[i] = 0; 
} 

vector::vector(int *x) 
{ 
    for(int i=0; i<size; i++) 
        v[i] = x[i]; 
} 

vector operator *(int a, vector b) 
{ 
    vector c; 
    for(int i=0; i<size; i++) 
        c.v[i] = a * b.v[i]; 
    return c; 
} 

vector operator *(vector b, int a) 
{ 
    vector c; 
    for(int i=0; i<size; i++) 
        c.v[i] = b.v[i] * a; 
    return c; 
} 

istream & operator >> (istream &din, vector &b) 
{ 
    for(int i=0; i<size; i++) 
        din >> b.v[i]; 
    return din; 
} 

ostream & operator << (ostream &dout, vector &b) 
{ 
    for(int i=0; i<size; i++) 
        dout << b.v[i] << " "; 
    return dout; 
} 

int main() 
{ 
    vector v1, v2; 
    int arr[size] = {1, 2, 3}; 
    vector v3(arr); 
    
    cout << "Enter vector v1 (size " << size << "): ";
    cin >> v1; 
    
    v2 = 2 * v1; // Using operator * overloaded for int * vector
    v3 = v1 * 3; // Using operator * overloaded for vector * int
    
    cout << "v1: " << v1 << endl; 
    cout << "2 * v1: " << v2 << endl; 
    cout << "v1 * 3: " << v3 << endl; 
    
    return 0; 
}

