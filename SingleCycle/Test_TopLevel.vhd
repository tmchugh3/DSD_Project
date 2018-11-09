----------------------------------------------------------------------------------
-- Company Name:  Binghamton University
-- Engineer(s):   Carl Betcher
-- Create Date:   11/3/2016 
-- Module Name:   Test_TopLevel.vhd
-- Project Name:  Lab8
-- Revisions:		10/24/2018  Added second channel of audio
-- VHDL Test Bench Created by ISE for module: TopLevel
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY Test_TopLevel IS
END Test_TopLevel;
 
ARCHITECTURE behavior OF Test_TopLevel IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
	 COMPONENT TopLevel
	Generic ( DELAY : integer := 640000 -- DELAY = 20 mS / clk_period
				  );								-- for Simulation, DELAY = 3
    Port ( Clk : in STD_LOGIC;
			  DIR_RIGHT : in STD_LOGIC; 	
	        DIR_LEFT : in STD_LOGIC;  
	        DIR_DOWN : in STD_LOGIC;  
	        DIR_UP : in STD_LOGIC;    
			  SWITCH : in  STD_LOGIC_VECTOR (7 downto 0);
           LED : out  STD_LOGIC_VECTOR (7 downto 0);
			  Seg7_SEG : out STD_LOGIC_VECTOR (6 downto 0); 
			  Seg7_DP  : out STD_LOGIC; 
			  Seg7_AN  : out STD_LOGIC_VECTOR (4 downto 0)
			  );
 	END COMPONENT;

	-- Clock period definitions
   constant Clk_period : time := 31.25 ns;
	signal Clk : std_logic;
   signal Switch : std_logic_vector(7 downto 0) := (others => '0');
 	--Outputs
   signal LED : std_logic_vector(7 downto 0);
   signal Seg7_SEG : std_logic_vector(6 downto 0);
   signal Seg7_DP : std_logic;
	signal Seg7_AN : STD_LOGIC_VECTOR (4 downto 0);
	signal DIR_RIGHT : std_logic;
	signal DIR_LEFT : std_logic;
	signal DIR_DOWN : std_logic;
	signal DIR_UP : std_logic;
BEGIN

	-- Instantiate the Unit Under Test (UUT)
   uut: TopLevel 
	GENERIC MAP ( Delay => 3 )
	PORT MAP (
			  Clk => Clk,
			  DIR_RIGHT => DIR_RIGHT,
	        DIR_LEFT => DIR_LEFT,
	        DIR_DOWN => DIR_DOWN,
	        DIR_UP => DIR_UP,   
			  SWITCH => SWITCH,
			  LED => LED,
			  Seg7_SEG => Seg7_SEG,
			  Seg7_DP => Seg7_DP,
			  Seg7_AN => Seg7_AN 
        );

   -- Clock process definitions
   Clk_process :process
   begin
		Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   end process;
END;