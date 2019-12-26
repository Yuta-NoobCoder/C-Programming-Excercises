#include <stdio.h>

void read_vector3D( double vector[ ] );
void outer_product3D( double vector1[ ], double vector2[ ], double vector3[ ] );
double inner_product3D( double vector1[ ], double vector2[ ] );

int main(void){
    double vec1[3], vec2[3];
    double outer_product[3];
    printf("ベクトル1の3成分を入力してください\n");
    read_vector3D(vec1);
    printf("ベクトル2の3成分を入力してください\n");
    read_vector3D(vec2);
    outer_product3D(vec1, vec2, outer_product);
    printf("\n");
    printf("2つのベクトルに垂直なベクトル3（外積）は(%.2f,%.2f,%.2f)です\n\n", outer_product[0], outer_product[1], outer_product[2]);
    printf("入力ベクトル1とベクトル3の内積は%.2fです\n", inner_product3D(vec1, outer_product));
    printf("入力ベクトル2とベクトル3の内積は%.2fです\n", inner_product3D(vec2, outer_product));
    return 0;
}

void read_vector3D( double vector[ ] ){
    for (int i = 0; i < 3; i++){
        scanf("%lf", &vector[i]);
    }
}

//内積
double inner_product3D( double vector1[ ], double vector2[ ] ){
    int product = 0;
    for (int i = 0; i < 3; i++){
        product += vector1[i] * vector2[i];
    }
    return (double)product;
}

//外積
void outer_product3D( double vector1[ ], double vector2[ ], double vector3[ ] ){  
    vector3[0] = vector1[1] * vector2[2] - vector1[2] * vector2[1];
    vector3[1] = vector1[2] * vector2[0] - vector1[0] * vector2[2];
    vector3[2] = vector1[0] * vector2[1] - vector1[1] * vector2[0];
}