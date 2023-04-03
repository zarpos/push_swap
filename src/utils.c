/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drubio-m <drubio-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 16:32:38 by drubio-m          #+#    #+#             */
/*   Updated: 2023/04/03 16:33:46 by drubio-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void free_array(char **str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    while (i >= 0)
    {
        free(str[i])
        i--;
    }
}