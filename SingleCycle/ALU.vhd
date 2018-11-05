----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    04:56:13 10/01/2018 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
----------------------------------------------------------------------------------
-- Company: 
-- Engineer: Isaac Thomas Lawson-Hughes 
-- 
-- Create Date:    23:59:36 09/30/2018 
-- Design Name: ALU
-- Module Name:    ALU - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


entity ALU is 
	Generic ( data_size : positive := 32 );
	Port ( A : in STD_LOGIC_VECTOR (data_size-1 downto 0);
		   B : in STD_LOGIC_VECTOR (data_size-1 downto 0);
			ALUControl : in STD_LOGIC_VECTOR (1 downto 0);
			Result : out STD_LOGIC_VECTOR (data_size-1 downto 0);
			ALUFlags : out STD_LOGIC_VECTOR (3 downto 0));
end ALU;

architecture Behavioral of ALU is
  
signal V, C, N, Z: STD_LOGIC;
signal result_9 : STD_LOGIC_VECTOR( data_size downto 0 );

begin
	process(ALUControl,A,B,result_9)
		begin
			case ALUControl is
				when "00" => result_9 <= STD_LOGIC_VECTOR(resize(unsigned(A),data_size+1) + resize(unsigned(B),data_size+1));
				when "01" => result_9 <= STD_LOGIC_VECTOR(resize(unsigned(A),data_size+1) - resize(unsigned(B),data_size+1));
				when "10" => result_9(data_size-1 downto 0) <= (A and B);
				when others => result_9(data_size-1 downto 0) <= (A or B);
			end case;
		Result <= result_9(data_size-1 downto 0);
	end process;
	process(ALUControl,result_9,A,B)
		begin
			if (((A(data_size-1) xor B(data_size-1)) xnor ALUControl(0)) AND (A(data_size-1) xor result_9(data_size-1)) AND (not ALUControl(1)))= '1' then
					V <= '1'; else V <= '0';
			end if;
			
			if ((not ALUControl(1)) AND result_9(data_size)) = '1' then
				C <= '1'; else C <= '0';
			end if;
			
			if (result_9(data_size-1)) = '1' then	
				N <= '1'; else N <= '0';
			end if;
			
			if (unsigned(result_9(data_size-1 downto 0)) = 0) then	
				Z <= '1'; else Z <= '0';
			end if;
	end process;
			
	ALUFlags <= N&C&V&Z;

end Behavioral;

