#include "push_swap.h"

static double compute_disorder(t_list *stack)
{
    int     mistakes;
    int     total_pairs;
    t_list  *comper;
    t_list  *corent;

    mistakes = 0;
    total_pairs = 0;
    corent = stack;
    while (corent)
    {
        comper = corent->next;
        while (comper)
        {
            total_pairs++;
            if (corent->val > comper->val)
                mistakes++;
            comper = comper->next;
        }
        corent = corent->next;
    }
    if (total_pairs == 0)
        return (0);
    return ((float)mistakes / total_pairs);
}

void disorder(t_list *stack, t_list *b, c_operations *p)
{
    float i;

    i = compute_disorder(stack);
    if (i < 0.2 || p->simple)
        simple_sort(&stack, &b, p);
    else if (i >=0.2 && i < 0.5 || p->medium)
        medium_sort(&stack, &b, p);
    else
        difficalt_sort(&stack, &b, p);
}
