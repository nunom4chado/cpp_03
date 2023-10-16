/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:11:26 by numartin          #+#    #+#             */
/*   Updated: 2023/10/16 15:44:31 by numartin         ###   ########.fr       */
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

  protected:
    static const unsigned int _defaultHitPoints;
    static const unsigned int _defaultEnergyPoints;
    static const unsigned int _defaultAttackDmg;
};

#endif