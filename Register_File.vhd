----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:00:17 10/07/2018 
-- Design Name: 
-- Module Name:    RegFile_ARM - Behavioral 
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
use IEEE.numeric_std.all;

entity Register_File is
	Generic (addr_size : natural := 4;
				data_size : natural := 32 );
    Port(clk : in STD_LOGIC;
		   A1  : in STD_LOGIC_VECTOR(addr_size-1 downto 0);
		   A2  : in STD_LOGIC_VECTOR(addr_size-1 downto 0); -- A1 and A2 are address files for RD1 and RD2
		   A3  : in STD_LOGIC_VECTOR(addr_size-1 downto 0); -- A3 selects address to be written to with data from WD3
		   WD3 : in STD_LOGIC_VECTOR(data_size-1 downto 0);
		   R15 : in STD_LOGIC_VECTOR(data_size-1 downto 0); -- R15 is program counter value
		   WE3 : in STD_LOGIC;
		   RD1 : out STD_LOGIC_VECTOR(data_size-1 downto 0);
		   RD2 : out STD_LOGIC_VECTOR(data_size-1 downto 0)); -- RD1 and RD2 provide operands/data
end Register_File;

architecture Behavioral of Register_File is
	type RegFile_type is array (0 to 2**addr_size-1) of
		std_logic_vector (data_size-1 downto 0);
	signal RegFile : RegFile_type := (others=> (others=>'0'));
	
begin
	-- write to RegFile
	process(clk)
		begin
			if rising_edge(clk) then
				if (WE3 = '1') then
					RegFile(to_integer(unsigned(A3))) <= WD3;
				end if;
			end if;
	end process;
				
-- R15 Option 1
	process(A1,R15,RegFile)
	begin
		if (A1 = "1111") then
			RD1 <= R15;
		else
			RD1 <= RegFile(to_integer(unsigned(A1)));
		end if;
	end process;
	
	process(A2,R15,RegFile)
	begin
		if (A2 = "1111") then
			RD2 <= R15;
		else
			RD2 <= RegFile(to_integer(unsigned(A2)));
		end if;
	end process;

end Behavioral;

