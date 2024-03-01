#include <stdio.h>
typedef struct _triangle {
    float base, altitude, area;
} Triangle;
int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
int main() {
    int n;
    Triangle triangles[50];
    n = input_n();
    input_n_triangles(n, triangles);
    find_n_areas(n, triangles);
    Triangle smallest = find_smallest_triangle(n, triangles);
    output(n, triangles, smallest);

    return 0;
}
Triangle input_triangle()
{
    Triangle t;
    printf("Enter the length of the base");
    scanf("%f",&t.base);
    printf("Enter the height of the triangle");
    scanf("%f",&t.altitude);
    return t ;
}

