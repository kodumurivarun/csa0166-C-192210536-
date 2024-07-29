#include <iostream>
#include <iomanip>

using namespace std;

class matrix {
    int maxrow, maxcol;
    int *ptr;

public:
    matrix(int r, int c) {
        maxrow = r;
        maxcol = c;
        ptr = new int[r * c];
    }

    void getmat() {
        int mat_off;
        cout << endl << "Enter elements of matrix:" << endl;
        for (int i = 0; i < maxrow; i++) {
            for (int j = 0; j < maxcol; j++) {
                mat_off = i * maxcol + j;
                cin >> ptr[mat_off];
            }
        }
    }

    void printmat() {
        int mat_off;
        for (int i = 0; i < maxrow; i++) {
            cout << endl;
            for (int j = 0; j < maxcol; j++) {
                mat_off = i * maxcol + j;
                cout << setw(3) << ptr[mat_off];
            }
        }
    }

    int delmat() {
        matrix q(maxrow - 1, maxcol - 1);
        int sign = 1, sum = 0, i, j, k, count;
        int newpos, pos, order;
        order = maxrow;
        if (order == 1) {
            return ptr[0];
        }
        for (i = 0; i < order; i++, sign *= -1) {
            for (j = 1; j < order; j++) {
                for (k = 0, count = 0; k < order; k++) {
                    if (k == i) continue;
                    pos = j * order + k;
                    newpos = (j - 1) * (order - 1) + count;
                    q.ptr[newpos] = ptr[pos];
                    count++;
                }
            }
            sum = sum + ptr[i] * sign * q.delmat();
        }
        return sum;
    }

    matrix operator+(matrix b) {
        matrix c(maxrow, maxcol);
        for (int i = 0; i < maxrow; i++) {
            for (int j = 0; j < maxcol; j++) {
                int mat_off = i * maxcol + j;
                c.ptr[mat_off] = ptr[mat_off] + b.ptr[mat_off];
            }
        }
        return c;
    }

    matrix operator*(matrix b) {
        matrix c(maxrow, b.maxcol);
        for (int i = 0; i < c.maxrow; i++) {
            for (int j = 0; j < c.maxcol; j++) {
                int mat_off3 = i * c.maxcol + j;
                c.ptr[mat_off3] = 0;
                for (int k = 0; k < b.maxrow; k++) {
                    int mat_off2 = k * b.maxcol + j;
                    int mat_off1 = i * maxcol + k;
                    c.ptr[mat_off3] += ptr[mat_off1] * b.ptr[mat_off2];
                }
            }
        }
        return c;
    }

    bool operator==(matrix b) {
        if (maxrow != b.maxrow || maxcol != b.maxcol)
            return false;

        for (int i = 0; i < maxrow; i++) {
            for (int j = 0; j < maxcol; j++) {
                int mat_off = i * maxcol + j;
                if (ptr[mat_off] != b.ptr[mat_off])
                    return false;
            }
        }
        return true;
    }
};

int main() {
    int rowa, cola, rowb, colb;
    cout << endl << "Enter dimensions of matrix A: ";
    cin >> rowa >> cola;
    matrix a(rowa, cola);
    a.getmat();

    cout << endl << "Enter dimensions of matrix B: ";
    cin >> rowb >> colb;
    matrix b(rowb, colb);
    b.getmat();

    if (rowa == rowb && cola == colb) {
        matrix c = a + b;
        cout << endl << "Sum of matrices A and B:" << endl;
        c.printmat();
    } else {
        cout << endl << "Matrices A and B are not of the same dimensions. Cannot add." << endl;
    }

    matrix d = a * b;
    cout << endl << "Product of matrices A and B:" << endl;
    d.printmat();

    cout << endl << "Determinant of matrix A = " << a.delmat() << endl;

    if (a == b)
        cout << endl << "Matrix A and B are equal." << endl;
    else
        cout << endl << "Matrix A and B are not equal." << endl;

    return 0;
}

