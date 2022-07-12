#include <iostream>

void bubbleSortOptimized(int* tab, const unsigned int size)
{
    unsigned int blackIndex; 

    blackIndex = size - 1; 
        do
        {
            unsigned int currentBubleIndex = 0;
            for (unsigned int i = 0; i < blackIndex; ++i)
            {
                std::cout << "Comparing " << tab[i] << " and " << tab[i + 1]
                    << std::endl; 
                if (tab[i] > tab[i + 1])
                {
                    int tmp = tab[i];
                    tab[i] = tab[i + 1];
                    tab[i + 1] = tmp;
                    currentBubleIndex = i;    
                }
            }
            blackIndex = currentBubleIndex;  
                std::cout << "Next round" << std::endl; 
        } while (blackIndex > 0);

}

int main()
{
    const unsigned int size = 10;
    int tab[size] = { 8, 3, 5, 0, 2, 9, 1, 7, 6, 4 };

    for (int i = 0; i < size; ++i)
    {
        std::cout << "[" << i << "]= " << tab[i] << std::endl;
    }
    std::cout << std::endl;

    bubbleSortOptimized(tab, size);

    for (int i = 0; i < size; ++i)
    {
        std::cout << "[" << i << "]= " << tab[i] << std::endl;
    }

}
