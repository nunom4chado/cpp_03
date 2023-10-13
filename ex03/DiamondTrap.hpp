/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:23:04 by numartin          #+#    #+#             */
/*   Updated: 2023/10/12 17:58:43 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_H
# define DIAMONDTRAP_CLASS_H

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap: public FragTrap, public ScavTrap {
    public:
        /* ----------------------- Constructers & Desctructer ----------------------- */
        DiamondTrap( void );
        DiamondTrap( std::string name );
        ~DiamondTrap( void );

        /* --------------------------- Operator Overloads --------------------------- */
        DiamondTrap & operator=( DiamondTrap const & rhs ); // canonical

        /* --------------------------------- Others --------------------------------- */
        using   ScavTrap::attack;
        void    whoAmI();

    private:
        std::string _name;
};

#endif