

int main() {
    char chk_digit;
    int i, ch, sum, temp;
    sum = 0;
    printf("enter IMEI (15 digits) : ");
    for (i = 1; i < 15; i++) {
        ch = getchar();
        if ((i & 1) == 1) {
            sum += ch - '0';
        } else {
            temp = 2 * (ch - '0');
            if (temp >= 10) {
                temp = (temp / 10) + (temp % 10);
            }
            sum += temp;
        }
    }
    ch = getchar();
    ch = ch - '0';
    chk_digit = sum % 10;
    if (chk_digit != 0) {
        chk_digit = 10 - chk_digit;
    }
    if (ch == chk_digit) {
        printf("****valid IMEI****\n");
    } else {
        printf("****invalid IMEI****\n");
    }
    return 0;
}
