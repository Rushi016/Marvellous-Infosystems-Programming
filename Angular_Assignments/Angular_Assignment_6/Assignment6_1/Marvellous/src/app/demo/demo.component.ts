import { Component } from '@angular/core';
import { FormsModule } from '@angular/forms';

@Component({
  selector: 'app-demo',
  standalone: true,
  imports: [FormsModule],
  templateUrl: './demo.component.html',
  styleUrl: './demo.component.css'
})
export class DemoComponent
{
  public InstituteName : string = "Marvellus Infosystems";
  public UserName : string = "";
  public Password : string = "";
}
