/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:53:51 by numartin          #+#    #+#             */
/*   Updated: 2023/10/13 22:38:36 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main( void ) {
    DiamondTrap a("D-TP");

    

    std::cout << a.getName() << " has " << a.getEnergy() << std::endl;
    a.attack("Handsome Jack");
    a.whoAmI();

    DiamondTrap b(a);
    std::cout << b.getName() << " has " << b.getEnergy() << std::endl;
    b.attack("someone");
    b.whoAmI();

    
    return 0;
}