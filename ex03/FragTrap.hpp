/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: numartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:11:26 by numartin          #+#    #+#             */
/*   Updated: 2023/10/12 16:39:54 by numartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap: virtual public ClapTrap {
    public:
        FragTrap( void );
        FragTrap( std::string name );
        ~FragTrap( void );

        /* --------------------------------- Others --------------------------------- */
        void highFivesGuys(void);
};

#endif