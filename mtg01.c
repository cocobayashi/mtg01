#include <stdio.h>

int main()
{
    int deck;           //デッキ枚数(入力)
    int kyecade;        //引きたいカード
    double kakuritu;    //確率
    int judge;          //プログラムの終了を判定するもの

    printf("デッキ内にある特定のカードを引ける確率計算プログラム\n");
    do {
        printf("\n");
        printf("残りデッキ枚数 ==> ");
        scanf("%d", &deck);

        while (deck < 1) {                                  //エラーチェック
            printf("デッキ枚数は 1 以上の数で入力してください\n");
            printf("残りデッキ枚数 ==> ");
            scanf("%d", &deck);
        }

        printf("引きたいカードの枚数 ==> ");
        scanf("%d", &kyecade);

        while (kyecade > deck) {                            //エラーチェック
            printf("引きたいカードが残りデッキ枚数より多いです\n");
            printf("引きたいカードの残り枚数 ==> ");
            scanf("%d", &kyecade);
        }

        kakuritu = 1.00 * kyecade / deck * 100;

        printf("\n");
        printf("残りデッキ枚数 %d 枚中にある %d 枚を引く確率は...\n", deck, kyecade);
        printf("%.2f %%です！\n", kakuritu);

        printf("プログラムを続けるには 1 を、終了するには 1 以外を入力してください\n");
        scanf("%d", &judge);

    } while (judge == 1);

    return 0;
    
}