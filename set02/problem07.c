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

int input_n() {
    int n;
    printf("Enter the number of triangles: ");
    scanf("%d", &n);
    return n;
}

Triangle input_triangle() {
    Triangle t;
    printf("Enter the base of the triangle: ");
    scanf("%f", &t.base);

    printf("Enter the altitude of the triangle: ");
    scanf("%f", &t.altitude);

    return t;
}


void input_n_triangles(int n, Triangle t[n]) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for Triangle %d:\n", i + 1);
        t[i] = input_triangle();
    }
}

void find_area(Triangle *t) 
{
    float area = (t->base * t->altitude)/2;
    printf("Area is %.2f\n", area);
  
    }

void find_n_areas(int n, Triangle t[n]) {
    for (int i = 0; i < n; i++) {
        find_area(&t[i]);
    }
}

Triangle find_smallest_triangle(int n, Triangle t[n]) {
    Triangle smallest = t[0];

    for (int i = 1; i < n; i++) {
        if (t[i].area < smallest.area) {
            smallest = t[i];
        }
    }

    return smallest;
}

void output(int n, Triangle t[n], Triangle smallest) {
    printf("Details of all triangles and the smallest triangle:\n");
    
    for (int i = 0; i < n; i++) {
        printf("Triangle %d - Base: %.2f, Altitude: %.2f, Area: %.2f\n", i + 1, t[i].base, t[i].altitude, t[i].area);
    }

    printf("\nSmallest Triangle - Base: %.2f, Altitude: %.2f, Area: %.2f\n", smallest.base, smallest.altitude, smallest.area);
}