CREATE TABLE customers (
	id 				INT PRIMARY KEY,
	name 			VARCHAR(100),
	street 			VARCHAR(100),
	city 			VARCHAR(100),
	state 			VARCHAR(100),
	credit_limit 	DECIMAL(10,2)
);

INSERT INTO customers
VALUES 	
  (1, 'Pedro Augusto da Rocha',     'Rua Pedro Carlos Hoffman',   'Porto Alegre',   'RS', 0700.00),
  (2, 'Antonio Carlos Mamel',       'Av. Pinheiros',              'Belo Horizonte', 'MG', 3500.50),
  (3, 'Luiza Augusta Mhor',         'Rua Salto Grande',           'Niteroi',        'RJ', 4000.00),
  (4, 'Jane Ester',                 'Av 7 de setembro',           'Erechim',        'RS', 0800.00),
  (5, 'Marcos Antônio dos Santos',  'Av Farrapos',                'Porto Alegre',   'RS', 4250.25);
