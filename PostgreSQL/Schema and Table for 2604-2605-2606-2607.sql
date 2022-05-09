-- Creating schema and table for problem 2604 and 2608
-- Criando esquema e tabela para o problema 2604 e 2608
CREATE TABLE products (
  id      INT PRIMARY KEY,
  name    VARCHAR (100),
  amount  INT,
  price   DECIMAL(10,2)
);

INSERT INTO products
VALUES
  (1, 'Two-door wardrobe',  100,    80),
  (2, 'Dining table',       1000,   560),
  (3, 'Towel holder',       10000,  5.50),
  (4, 'Computer desk',      350,    100),
  (5, 'Chair',              3000,   210.64),
  (6, 'Single bed',         750,    99);
  
-- Creating schemas and tables for problems 2605, 2606 and 2607
-- Criando esquemas e tabelas para o problemas 2605, 2606 e 2607
CREATE TABLE providers (
  id      INT PRIMARY KEY,
  name    VARCHAR(100),
  street  VARCHAR(100),
  city    VARCHAR(100),
  state   CHAR(2)
);

INSERT INTO providers
VALUES
	(1, 'Henrique', 'Av Brasil', 'Rio de Janeiro', 'RJ'),
	(2, 'Marcelo Augusto', 'Rua Imigrantes', 'Belo Horizonte', 'MG'),
	(3, 'Caroline Silva', 'Av São Paulo', 'Salvador', 'BA'),
	(4, 'Guilerme Staff', 'Rua Central', 'Porto Alegre', 'RS'),
	(5, 'Isabela Moraes', 'Av Juiz Grande', 'Curitiba', 'PR'),
	(6, 'Francisco Accerr', 'Av Paulista', 'São Paulo', 'SP');

CREATE TABLE categories(
  id   INT PRIMARY KEY,
  name VARCHAR(50)
);

INSERT INTO categories
VALUES
	(1,  'old stock'),
	(2,  'new stock'),
	(3,  'modern'),
	(4,  'commercial'),
	(5,  'recyclable'),
	(6,  'executive'),
	(7,  'superior'),
	(8,  'wood'),
	(9,  'super luxury'),
	(10, 'vintage');

-- Table "products" updated in order to suit it to the problems
-- Atualização da tabela "products" para adequação aos problemas
ALTER TABLE products
ADD COLUMN id_providers INT,
ADD COLUMN id_categories INT,
ADD FOREIGN KEY (id_providers) REFERENCES providers(id),
ADD FOREIGN KEY (id_categories) REFERENCES categories(id);

UPDATE products
SET id_providers = 6, id_categories = 8
WHERE id = 1;

UPDATE products
SET id_providers = 1, id_categories = 9
WHERE id = 2;

UPDATE products
SET  id_providers = 5, id_categories = 1
where id = 3;

UPDATE products
SET  id_providers = 4, id_categories = 6
where id = 4;

UPDATE products
SET  id_providers = 3, id_categories = 6
where id = 5;

UPDATE products
SET  id_providers = 1, id_categories = 2
where id = 6;
