SELECT p1.name, p2.name
FROM products p1 INNER JOIN categories c ON (p1.id_categories = c.id) INNER JOIN providers p2 ON (p1.id_providers = p2.id)
WHERE c.id = 6;
