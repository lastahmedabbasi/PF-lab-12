#include <stdio.h>
#include <stdlib.h>

int main() {
    int noOFCategories, lowestStockIndex = 0, updateIndex;
    float totalStock = 0.0, avgStock;
    float *categoriesStockQuantity; 

    // 1)
    printf("Enter number of categories: \n");
    scanf("%d", &noOFCategories);

    if (noOFCategories <= 0) {
        printf("Invalid number of categories.\n");
        return 1;
    }

    categoriesStockQuantity = (float *)malloc(noOFCategories * sizeof(float));

    if (categoriesStockQuantity == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 2 and 3)
    for (int i = 0; i < noOFCategories; i++) {
        printf("Enter stock of category %d: ", i + 1);
        scanf("%f", &categoriesStockQuantity[i]);

        totalStock += categoriesStockQuantity[i];

        if (i == 0 || categoriesStockQuantity[i] < categoriesStockQuantity[lowestStockIndex]) {
            lowestStockIndex = i;
        }
    }
    avgStock = totalStock / noOFCategories;

    printf("\n--- Stock Summary ---\n");
    printf("Total Stock: %.2f\n", totalStock);
    printf("Average Stock: %.2f\n", avgStock);
    printf("Index of category with lowest stock: %d (Category %d with stock %.2f)\n", 
           lowestStockIndex, lowestStockIndex + 1, categoriesStockQuantity[lowestStockIndex]);

    // 4) 
    printf("\nEnter index whose category's stock you want to update (0 to %d), enter -1 to skip: ", noOFCategories - 1);
    scanf("%d", &updateIndex);

    if (updateIndex >= 0 && updateIndex < noOFCategories) {
        printf("Enter new stock value for category %d: ", updateIndex + 1);
        scanf("%f", &categoriesStockQuantity[updateIndex]);
        printf("Successfully updated! New quantity for category %d: %.2f\n", updateIndex + 1, categoriesStockQuantity[updateIndex]);
    } else if (updateIndex != -1) {
        printf("Invalid index entered.\n");
    }

    // 5) 
    free(categoriesStockQuantity);
    categoriesStockQuantity = NULL;

    return 0;
}
