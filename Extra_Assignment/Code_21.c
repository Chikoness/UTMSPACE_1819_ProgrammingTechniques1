#include <stdio.h>

/*
    You are visiting Aunt Amirah's hari raya open house! Navigate around and have fun. 
*/

int main ()
{
    int pos1, iter = 1;

    printf("Welcome to Aunt Amirah's house!\n");
    printf("Enter '1' to go into the house, enter '2' to go to the backyard, enter '3' to go back into your car: ");
    scanf("%i", &pos1);

    while (iter == 1)
    {
        switch (pos1)
        {
            case 1:
                printf("You stepped into Aunt Amirah's house and admire the beautiful decorations, she must have spend a whole month preparing for this festive season! Aunt Amirah and Uncle Rami greeted you with joy and happiness. You see your relatives and friends chatting happily all over the house.\n");
                printf("\nEnter '2' to go to the backyard, enter '6' to chat with the guests, enter '9' to end the house visit.\n");
                scanf("%i", &pos1);
                while (pos1 != 2 && pos1 != 6 && pos1 != 9)
                {
                    printf("No such command available. Try again.\n");
                    scanf("%i", &pos1);
                }
                break;
            case 2:
                printf("You went around the house and walked into the backyard. You are greeted by beautiful green lanterns, colorful flowers decorated in the garden, and children running around playing with fireworks. Aunt Amirah's adult son Ali greeted you and invited you over to have a seat on beautifully decorated bench. The bench is surprisingly comfortable. He hands you a drink and a ketupat. You consume your meal while watching over the scenery of the children playing and Ali's pet cats chilling next to the fountain.\n");
                printf("\nEnter '1' to go into the house, enter '4' to play with the children, enter '5' to play with Ali's cats, enter '9' to end the house visit.\n");
                scanf("%i", &pos1);
                while (pos1 != 1 && pos1 != 4 && pos1 != 5 && pos1 != 9)
                {
                    printf("No such command available. Try again.\n");
                    scanf("%i", &pos1);
                }
                break;
            case 3:
                printf("Oh no! You find yourself feeling unwell from having too much fun during this festive season. Perhaps you will drop by again another time. You should probably go and apologize to Aunt Amirah.\n");
                iter = 0;
                break;
            case 4:
                printf("You walked towards the children and little Mei Ling handed you a firecracker. You light it up and as the firecracker exploded, the children screamed in delight. You learnt that Sami was given a scholarship to attend an elite private school next year, while Rafiz was selected to represent his school in a Math competition, and Kirara gave the last piece of her candy to her little sister instead of enjoying it herself. How exciting, these bright children who will one day lead the nation!\n");
                printf("Enter '1' to go into the house, enter '5' to play with Ali's cats, enter '9' to end the house visit.\n");
                scanf("%i", &pos1);
                while (pos1 != 1 && pos1 != 5 && pos1 != 9)
                {
                    printf("No such command available. Try again.\n");
                    scanf("%i", &pos1);
                }
                break;
            case 5:
                printf("You walked slowly towards Ali's cats as to not startle them. His beautiful Ragdoll cat named Nene and his other long-haired persian cat named Memow. They purred softly as you pet their heads. Ali joined you to pet the cats as well. You learnt that Ali adopted Nene when its previous owner decided to leave it next to a drain in the cold rain, while Memow was abused badly by its previous owners and Ali took it in before even more damage was done. Both cats were raised very carefully and with lots of love from Ali. You are glad that these cats are taken in by your kind hearted cousin.\n");
                printf("Enter '1' to go into the house, enter '4' to play with the children, enter '9' to end the house visit.\n");
                scanf("%i", &pos1);
                while (pos1 != 1 && pos1 != 4 && pos1 != 9)
                {
                    printf("No such command available. Try again.\n");
                    scanf("%i", &pos1);
                }
                break;
            case 6:
                printf("You found a seat and sat next to Aunt Amirah. She talks about the job offer Ali has gotten from the United States and the salary they were willing to offer, but he turned it down so he could work nearer to his house. Uncle Amin on the other hand, recently learnt that his wife is now cancer free and is a breast cancer survivor, and now she is an advocate for an NGO for breast cancer awareness. Uncle Rami reminded you again that you are always welcomed to stay and live at their house, as your parents live all the way up in Perlis, while you are working in Melaka. It is very heartwarming and you are very glad that you have caring relatives.\n");
                printf("Enter '2' to go to the backyard, enter '9' to end the house visit.\n");
                scanf("%i", &pos1);
                while (pos1 != 2 && pos1 != 9)
                {
                    printf("No such command available. Try again.\n");
                    scanf("%i", &pos1);
                }
                break;
            case 9:
                iter = 0;
                break;
            default:
                iter = 0;
        }
    }

    printf("After a heartful greeting with Aunt Amirah, you walked towards your car and drove home. And as you drove, you reminiscent about how fun and hopeful Hari Raya was this year, and can't wait for the next one!\n");
    printf("Selamat Hari Raya, Maaf Zahir dan Batin! Hope you had a great hari raya this year!");
    
    return 0;
}