/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:53:51 by numartin          #+#    #+#             */
/*   Updated: 2023/10/12 17:42:53 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main( void ) {
    ClapTrap a;
    ClapTrap b("SL4CK-TP");

    ClapTrap c(b);
    std::cout << c.getName() << std::endl;
    
    a.attack("Handsome Jack");
    a.attack("Handsome Jack");
    a.attack("Handsome Jack");
    a.attack("Handsome Jack");
    a.attack("Handsome Jack");
    a.attack("Handsome Jack");
    a.attack("Handsome Jack");
    a.attack("Handsome Jack");
    a.attack("Handsome Jack");
    a.attack(b.getName());
    a.attack("Handsome Jack");

    std::cout << a.getName() << " has " << a.getEnergy() << " energy left" << std::endl;

    a.takeDamage(4);
    a.takeDamage(10);
    a.takeDamage(10);
    a.takeDamage(10);
    std::cout << a.getName() << " hp is " << a.getHp() << std::endl;
    
    a.beRepaired(24);
    std::cout << a.getName() << " hp is " << a.getHp() << std::endl;

    c = a;
    std::cout << c.getName() << " hp is " << c.getHp() << std::endl;
    
    return 0;
}