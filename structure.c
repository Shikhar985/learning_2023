#include <stdio.h>
struct Box {
    float length;
    float width;
    float height;
};
void calculateBoxProperties(struct Box *box) {

    float volume = box->length * box->width * box->height;
    float surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
    printf("Volume: %.2f\n", volume);
    printf("Total Surface Area: %.2f\n", surfaceArea);
}
int main() {
 
    struct Box myBox;
    myBox.length = 5.0;
    myBox.width = 3.0;
    myBox.height = 2.0;
    struct Box *boxPtr = &myBox;
    calculateBoxProperties(boxPtr);

    return 0;
}
