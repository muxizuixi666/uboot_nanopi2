// Non-Cache,  	Cache,			Physical  ,		Size(MB),
	0x80000000, 	0x40000000,		0x40000000,		  1024,		/* DDR	*/
	0xC0000000, 			 0,		0xC0000000, 		3,		/* NOMAL IO, Reserved */
	0xF0000000, 			 0,		0xF0000000, 		1, 		/* Cortex-A9 MPcore Private Memory Region (SCU) */
	0xFFF00000, 			 0,		0xFFF00000, 		1,		/* SRAM : VECTOR */
	0xCF000000, 			 0,		0xCF000000, 		1,		/* PL310 L2 Cache */
	0x2C000000, 			 0,		0x2C000000, 		1, 		/* NAND  */
	0x04000000,				 0,		0x04000000,			1,		/* CS 1 */
	0x00000000,				 0,		0x00000000,			1,		/* CS 0 */
			 0,				 0,			     0,			0 		/* PAGE_END */

/*------------------------------------------------------------------------------
 * 	U-boot MMU Table Memory Map
 *
 *	Virtual Memory 								Physical Memoy
 * 0xFFFFFFFF	==================================
 *  			|                   		|
 *			  	|    			            |
 *  			|    						|
 *				==================================
 *  			|    (SCU) (1M)				|
 *  0xF0000000   ................................. 		0xF0000000
 *  			|    PL320 L2 Cache (1M)	|
 *  0xCF000000   ................................. 		0xCF000000
 *  			|    NOMAL IO (3M) 			|
 *  0xC0000000   ................................. 		0xC0000000
 *  			|     						|
 *  0xBFFFFFFF	..................................  	0x80000000
 *  			|                   		|
 *  			| DDR AREA	(1GB)			|
 *  			| 	(no CACHE, no BUFFER)	|
 *  			|                  	 		|			0x40000000
 * 0x80000000   ..................................
 *  			|                   		|			0x80000000
 * 				| DDR AREA	(1GB)
 *  			|	(CACHE,BUFFER) 			|
 * 0x40000000   ...................................  	0x40000000
 *  			| NAND(1MB)					|
 * 0x2c000000   ................................. 		0x2c000000
 *  			|							|
 *  			|	CS1(1MB)				|
 * 0x04000000   ................................. 		0x04000000
 *  			|							|
 *  			|	CS0(1MB)	   			|
 * 0x00000000   =================================  		0x00000000
 *
 ------------------------------------------------------------------------------*/


