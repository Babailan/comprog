import { createCipheriv, createDecipheriv } from "crypto";
const resizeIv = Buffer.allocUnsafe(16);
const key = Buffer.alloc(32);
const ci = createCipheriv("aes256", key, resizeIv);
ci.update("rongrong");
const de = createDecipheriv("aes256", key, resizeIv);
console.log(de.final().toString());
