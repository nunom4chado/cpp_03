/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:11:26 by numartin          #+#    #+#             */
/*   Updated: 2023/10/18 18:35:53 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
#define FRAGTRAP_CLASS_H

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap {
  public:
    FragTrap();                    // Default Constructer (Canonical)
    FragTrap(std::string name);    // Parametric Constructer
    FragTrap(const FragTrap &src); // Copy Constructer (Canonical)
    ~FragTrap();                   // Destructer (Canonical)

    FragTrap &operator=(const FragTrap &rhs); // Assignment Operator (Canonical)

    // Other Member Functions
    void highFivesGuys(void);

    static const unsigned int defaultHitPoints;
    static const unsigned int defaultEnergyPoints;
    static const unsigned int defaultAttackDmg;
};

#endif