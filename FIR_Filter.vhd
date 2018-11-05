library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

-- package declaration for FIR_Coeff_type
package DSDtypes_pkg is
	type FIR_Coeff_type is array (natural range <>) of unsigned(11 downto 0);
end package DSDtypes_pkg;

-- FIR_Filter behavioral description

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use work.DSDtypes_pkg.all; -- use package defined above

entity FIR_Filter is
	Generic (Coeff : FIR_Coeff_type; N : positive := 12);
	Port ( clk : in STD_LOGIC;
		Sample : in STD_LOGIC;
			X : in STD_LOGIC_VECTOR (11 downto 0);
			Y : out STD_LOGIC_VECTOR (11 downto 0));
end FIR_Filter;


architecture Behavioral of FIR_Filter is

signal xt0_out, xt1_out, xt2_out,yReg_out : std_logic_vector(11 downto 0) := x"000";
signal c0_out : std_logic_vector(11 downto 0) := x"537";
signal c1_out : std_logic_vector(11 downto 0) := x"593";
signal c2_out : std_logic_vector(11 downto 0) := x"537";
signal mult1,mult2,mult3,add1,add2 : std_logic_vector(23 downto 0);

begin

process(clk)
begin
	if rising_edge(clk) then	
		if Sample = '1' then	
			xt2_out <= xt1_out;
			xt1_out <= xt0_out;
			xt0_out <= X;
			
		end if;
	end if;
end process;

mult1 <= xt0_out*c0_out;
mult2 <= xt1_out*c1_out;
mult3 <= xt2_out*c2_out;

add1 <= mult1 + mult2;
add2 <= 

yReg_out <= add2(add2'length-1 downto add2'length);



end Behavioral;