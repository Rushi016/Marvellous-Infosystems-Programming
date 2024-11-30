import { Component, EventEmitter, Output} from '@angular/core';
import { FormsModule } from '@angular/forms';

@Component({
  selector: 'app-child',
  standalone: true,
  imports: [FormsModule],
  templateUrl: './child.component.html',
  styleUrl: './child.component.css'
})
export class ChildComponent
{
  public textMessage : any;

  @Output() public Myevent = new EventEmitter();

  public sendMessage()
  {
    this.Myevent.emit(this.textMessage);
  }
}
